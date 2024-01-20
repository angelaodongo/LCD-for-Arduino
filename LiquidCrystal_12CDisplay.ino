#include <LiquidCrystal_I2C.h> //Library for LCD

//To set the LCD address(adjust according to LCD module)
#define LCD_ADDRESS 0x27

//set LCD dimensions
#define LCD_COLUMNS 16
#define LCD_ROWS 2

//declare a LiquidCrystal_I2C object with I2C address, the number of columns and rows
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
  //initialize the lcd and turn on the backlight
  lcd.init();//initialize the lcd
  lcd.backlight();//open the backlight
  }

 void loop(){
  //move the cursor to the desired position(column_index, row_index) then print the lcd message
//  lcd.clear();
  lcd.setCursor(3,0);//cursor position
  lcd.print("DOOR LOCK ");//print the message
  lcd.setCursor(1,1);
  lcd.print("Enter Passcode");
  delay(2000);
  }


  //LCD_I2C functions:
      //LiquidCrystal()
      //begin() - initializes the interface to the LCD screen and specifies the dimensions of the display, it needs to be called before any other LCD library commands
      //clear() - clears the LCD screen and postitons the cursor in the upper left corner
      //home() -  positions the LCD in the upper left of the LCD.
      //setCursor() - positions the LCD cursor to the location at which subsequent text written to the LCD will be diplayed
      //write() - Write a character to the LCD.
      //print() - Prints text to the LCD.
      //cursor() - Display the LCD cursor: an underscore (line) at the position to which the next character will be written.
      //noCursor() - Hides the LCD cursor.
      //blink() - Display the blinking LCD cursor. If used in combination with the cursor() function, the result will depend on the particular display.
      //noBlink() - Turns off the blinking LCD cursor.
      //display() - Turns on the LCD display, after it’s been turned off with noDisplay(). This will restore the text (and cursor) that was on the display.
      //noDisplay() - Turns off the LCD display, without losing the text currently shown on it.
      //scrollDisplayLeft() - Scrolls the contents of the display (text and cursor) one space to the left.
      //scrollDisplayRight() - Scrolls the contents of the display (text and cursor) one space to the right.
      //autoscroll() - Turns on automatic scrolling of the LCD.
      //noAutoscroll() - Turns off automatic scrolling of the LCD.
      //leftToRight() - Set the direction for text written to the LCD to left-to-right, the default.
      //rightToLeft() - Set the direction for text written to the LCD to right-to-left (the default is left-to-right).
      //createChar() - Create a custom character (glyph) for use on the LCD. Up to eight characters of 5x8 pixels are supported (numbered 0 to 7).


      
