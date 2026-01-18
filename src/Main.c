#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"
#include "/home/codeleaded/System/Static/Library/ASCII_Sprite.h"

int main(int argc,const char *argv[]){
    ASCII_Sprite sp = ASCII_Sprite_LoadBySprite("./assets/Physik.jpg",5,5);
    ASCII_Sprite_Save(&sp,"./assets/Physik." ASCII_SPRITE_TYPE);
    ASCII_Sprite_Free(&sp);
    return 0;
}