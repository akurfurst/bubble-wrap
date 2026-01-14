#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>


int main(){
    bn::core::init();
    bn::backdrop::set_color(bn::color(20,20,31));

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