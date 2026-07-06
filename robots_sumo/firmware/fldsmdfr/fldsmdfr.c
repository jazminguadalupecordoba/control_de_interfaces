#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"


#define GPIO_22 22
#define  8
#define GPIO_22 19
#define GPIO_08 18 

int main(){
    stdio_init_all();
    sleep_ms(1000);


    while (true) {
        gpio_put(GPIO_22,1);
        gpio_get(GPIO_08);
        if (gpio_get(GPIO_08==1));
            gpio_put(GPIO_22,1);
        if (gpio_get(GPIO_08==0));
            gpio_put(GPIO_22,0);
     }
}
