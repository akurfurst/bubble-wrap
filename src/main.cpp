#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>
#include <bn_sprite_ptr.h>
#include <bn_sprite_items_dot.h>

int main(){
    bn::core::init();
    bn::backdrop::set_color(bn::color(20,20,31));

    bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(10,40);
    bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(-10, 40);
    bn::sprite_ptr myCircle3 = bn::sprite_items::dot.create_sprite(-10, -40);
    bn::sprite_ptr myCircle4 = bn::sprite_items::dot.create_sprite(10, -40);
    bn::sprite_ptr myCircle5 = bn::sprite_items::dot.create_sprite(40, 0);
    bn::sprite_ptr myCircle6 = bn::sprite_items::dot.create_sprite(-40, 0);

    while(true){
        if (bn::keypad::a_held() && bn::keypad::b_held())
        {
            bn::backdrop::set_color(bn::color(0, 0, 31));
        }
        else if(bn::keypad::a_held())
        {
            bn::backdrop::set_color(bn::color(31, 21, 22));
        }
        else if(bn::keypad::b_held()){
            bn::backdrop::set_color(bn::color(22, 31, 21));
        }
        else{
            bn::backdrop::set_color(bn::color(20, 20, 31));
        }

        bn::core::update();
    }
}