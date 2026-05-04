#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

/**
 * @brief Programa principal
*/
int main(void) {
  // Inicializo el USB
  stdio_init_all();
  int claudia = 0;
  int laura =0;
  if (cyw43_arch_init()) {
        printf("Wi-Fi init failed");
        return -1;
    }

  // Mensaje por USB
  printf("\nHola mundo!\n");

  while (true) {
    // Prendo LED
    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
    claudia = claudia+1;
    // Mensaje por USB
    printf("LED prendido\nencendidos=%d", claudia);
    // Demora
    sleep_ms(1000);
    // Apago LED
    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
    laura = laura+1;
    // Mensaje por USB
    printf("LED apagado\nencendidos=%d",laura);
    // Demora
    sleep_ms(1000);
  }
  return 0;
}
