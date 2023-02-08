/* 8:1 Digital Multiplexer Chip by Dlloydev*/

#include "wokwi-api.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  pin_t pin_D1;
  pin_t pin_D2;
  pin_t pin_D3;
  pin_t pin_D4;
  pin_t pin_D5;
  pin_t pin_D6;
  pin_t pin_D7;
  pin_t pin_D8;
  pin_t pin_OUT;
  uint32_t Select_attr;
  uint32_t Select;
} chip_state_t;

static void chip_timer_event(void *user_data);

void chip_init(void) {
  chip_state_t *chip = malloc(sizeof(chip_state_t));
  chip->pin_D1 = pin_init("D1", INPUT);
  chip->pin_D2 = pin_init("D2", INPUT);
  chip->pin_D3 = pin_init("D3", INPUT);
  chip->pin_D4 = pin_init("D4", INPUT);
  chip->pin_D5 = pin_init("D5", INPUT);
  chip->pin_D6 = pin_init("D6", INPUT);
  chip->pin_D7 = pin_init("D7", INPUT);
  chip->pin_D8 = pin_init("D8", INPUT);
  chip->pin_OUT = pin_init("OUT", OUTPUT);
  chip->Select_attr = attr_init("Select", 0);

  const timer_config_t timer_config = {
    .callback = chip_timer_event,
    .user_data = chip,
  };
  timer_t timer_id = timer_init(&timer_config);
  timer_start(timer_id, 1000, true);
}

static void chip_timer_event(void *user_data) {
  chip_state_t *chip = (chip_state_t*)user_data;
  chip->Select = attr_read(chip->Select_attr);
  if (chip->Select == 8) pin_write(chip->pin_OUT, pin_read(chip->pin_D8));
  else if (chip->Select == 7) pin_write(chip->pin_OUT, pin_read(chip->pin_D7));
  else if (chip->Select == 6) pin_write(chip->pin_OUT, pin_read(chip->pin_D6));
  else if (chip->Select == 5) pin_write(chip->pin_OUT, pin_read(chip->pin_D5));
  else if (chip->Select == 4) pin_write(chip->pin_OUT, pin_read(chip->pin_D4));
  else if (chip->Select == 3) pin_write(chip->pin_OUT, pin_read(chip->pin_D3));
  else if (chip->Select == 2) pin_write(chip->pin_OUT, pin_read(chip->pin_D2));
  else if (chip->Select == 1) pin_write(chip->pin_OUT, pin_read(chip->pin_D1));
  else pin_write(chip->pin_OUT, 0);
}
