#include <stdio.h>
#include "pico/stdlib.h"

#define GPIO_22 22
#define GPIO_08 8
/**
 * @brief Programa principal
*/
int main(void) {
  // Inicializo el USB
  stdio_init_all();
  // Demora para esperar la conexion
  sleep_ms(1000);

  // Inicializacion de GPIO con gpio_init()

  /* Habilito el GPIO25 (LED)
  gpio_init(PICO_29_PIN);
  GPIO22 como salida
  gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);
  Configuracion de entrada/salida con gpio_set_dir()

  */
gpio_init(GPIO_22);
gpio_init(GPIO_08);
gpio_set_dir(GPIO_22, GPIO_OUT);
gpio_set_dir(GPIO_08,GPIO_IN);

  while (true) {
    gpio_put(GPIO_22,1);
    gpio_get(GPIO_08);
    if (gpio_get(GPIO_08==1));
    gpio_put(GPIO_22,1);
    if (gpio_get(GPIO_08==0));
    gpio_put(GPIO_22,0);

    /* Prendo LED
    gpio_put(PICO_DEFAULT_LED_PIN, 1);

    */

    // Resolver logica para GPIO20 -> GPIO6

    // Resolver logica para GPIO21 -> GPIO7

    // Resolver logica para GPIO22 -> GPIO8

  }
  return 0;
}