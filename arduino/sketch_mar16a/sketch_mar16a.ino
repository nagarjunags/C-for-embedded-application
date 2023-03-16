#define MASK(x) ((unsigned char)(1<<x))
void setup() {
  // put your setup code here, to run once:
  DDRB |=MASK(5);//make the pin b as output
}

void loop() 
{
    PORTB |= MASK(5);
    delay(5000);
    PORTB &= MASK(5);
    delay(5000);

}
