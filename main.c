#include <gb/gb.h>   
#include <stdio.h> 

void main() {
    DISPLAY_ON;      
    SHOW_BKG;        
    
    while(1) {
        UINT8 keys;  

        keys = joypad();  

        if (keys & J_UP) {
          // Mover hacia arriba
            move_sprite(0, 75, 75 - 1);
        }

        UINT8 sprite_data[] = {
            0x3C, 0x3C, 0x42, 0x42, 0x81, 0x81, 0x81, 0x81  
        };

        set_sprite_data(0, 1, sprite_data);  
        set_sprite_tile(0, 0);  
        move_sprite(0, 75, 75);  

        SHOW_SPRITES;  
        wait_vbl_done();  
    }
}
