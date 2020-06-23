
/*
 * lcd.h
 *
 * Created: 5-3-2020 12:03:51
 *  Author: marle
 */ 

void init();
void display_text(char *str);
void set_cursor(int position);
void writeLcd();
void writeData(unsigned char byte);
