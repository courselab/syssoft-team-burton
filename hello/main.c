/*
 *    SPDX-FileCopyrightText: 2021 Monaco F. J. <monaco@usp.br>
 *    SPDX-FileCopyrightText: 2025 Lucas Claros <lucas.claros@cobli.co>
 *   
 *    SPDX-License-Identifier: GPL-3.0-or-later
 *
 *  This file is a derivative of SYSeg (https://gitlab.com/monaco/syseg)
 *  and includes modifications made by the following author(s):
 *  Lucas Claros <lucas.claros@cobli.co>
 */

#include <stdio.h>

int main(void)
{
  printf("Hello World\n\r");
  printf("Tecle ('q' para sair):\n\r");
  int c, stop = 0;
  do {
    c = get_key();
    char buf[2] = {c, 0};
    printf("Tecla: ");
    printf(buf);
    printf("\n\r");
    stop = buf[0] == 'q' || buf[0] == 'Q';
  } while (!stop);
  printf("Saindo...\n\r");
  end();
  return 0;
}