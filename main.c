include <stdio.h>

#include "pico/stdlib.h"



bool repeating_timer_callback1(struct repeating_timer *t) {

    gpio_put(6, !gpio_get(6));

    return true;

}

bool repeating_timer_callback2(struct repeating_timer *t) {

    gpio_put(7, !gpio_get(7));

    return true;

}

bool repeating_timer_callback3(struct repeating_timer *t) {

    gpio_put(8, !gpio_get(8));

    return true;

}

bool repeating_timer_callback4(struct repeating_timer *t) {

    gpio_put(9, !gpio_get(9));

    return true;

}




int main(void) {

    gpio_init(6);
   
 gpio_set_dir(6, true);

    gpio_init(7);

    gpio_set_dir(7, true);

    gpio_init(8);

    gpio_set_dir(8, true);

    gpio_init(9);

    gpio_set_dir(9, true);


    

struct repeating_timer timer1;

    struct repeating_timer timer2;

    struct repeating_timer timer3;

    struct repeating_timer timer4;


    

add_repeating_timer_ms(250, repeating_timer_callback1, NULL, &timer1);

    add_repeating_timer_ms(500, repeating_timer_callback2, NULL, &timer2);

    add_repeating_timer_ms(1000, repeating_timer_callback3, NULL, &timer3);

    add_repeating_timer_ms(2000, repeating_timer_callback4, NULL, &timer4);

    


while(1);


    return 0;


}