#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>
#include <bn_sprite_ptr.h>
#include <bn_sprite_items_dot.h>
#include <bn_log.h>
#include <bn_vector.h>

int main(){
    bn::core::init();
    bn::backdrop::set_color(bn::color(20,20,31));

    // bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(10,40);
     //bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(-115, -75);
    // bn::sprite_ptr myCircle3 = bn::sprite_items::dot.create_sprite(-10, -40);
    // bn::sprite_ptr myCircle4 = bn::sprite_items::dot.create_sprite(10, -40);
    // bn::sprite_ptr myCircle5 = bn::sprite_items::dot.create_sprite(40, 0);
    // bn::sprite_ptr myCircle6 = bn::sprite_items::dot.create_sprite(-40, 0);

    bn::vector<bn::sprite_ptr, 96> circles = {};
    // for (int x = -40; x <= 40; x += 10){
    //     bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(x, 40);
    //     BN_LOG("x value", x);
    //     circles.push_back(myCircle);
    // }
    int sprites = 0;
    for(int x = -110; x <= 110; x+=20){
        for(int y = -70; y <= 70; y+=20){
            bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(x, y);
            circles.push_back(myCircle);
            sprites++;
        }
    }

    BN_LOG(sprites);
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