#ifndef LCD_H
#define LCD_H


void LCD_command(char cmd);

void LCD_clear();

void LCD_print_char(char chr);

void LCD_print_string (char *str);

void LCD_print_string_xy (char row, char pos, char *str);

void LCD_init (void);


#endif