// Declaration
int A=0,B=0,C=0,D=0,a,b,c,d,e,f,g,W,X,Y,Z,i,j,thisPin;
int ledPins[]={2,3,4,5,6,7,8,9,10};
int pinCount=9,r0,r1;
int low_pins[]={9,10};
int cnt[2];
unsigned int initialtime, elapsed=0;
void showit(int x);

// the setup function runs once when you press reset or power the board

void setup()
{
// initialize digital pin 2 to 10 as an output
for( thisPin=0;thisPin < pinCount; thisPin++)
{
pinMode(ledPins[thisPin], OUTPUT);
}
}
// the loop function runs over and over again forever.
void loop()
{
// count 0 to 5, every 10 seconds
for(r1=0;r1<=5;r1++)
{ 
//count 0 to 9 with 1 second interval
for(r0=0;r0<=9;r0++)
{ 
//  number of milliseconds since the program started.
initialtime=millis(); 
elapsed = initialtime;
//ensuring delay of 1 second
while (elapsed - initialtime <= 1000)
{
elapsed = millis(); 

cnt[0] = r0;
cnt[1] = r1;

// Multiplexing Displays
for( i=0;i<2;i++)
{
// turn all the LED(s) LOW
	for(j=0;j<2;j++)
		digitalWrite(low_pins[j],LOW);

digitalWrite(low_pins[i],HIGH);
// display digits 
showit(cnt[i]);
//allow numbers to be displayed on LED before switching
delay(2);
}//end of multiplexing displays
}//end of waiting for 1 second
}//end decade count loop 
}//end 0-5 count
}


// function for display decoder
void showit(int x){
int D,C,B,A;
// logic for decimal to binary
A=x%2;
x=x/2;
B=x%2;
x=x/2;
C=x%2;
x=x/2;
D=x%2;
a=(!D&&!C&&!B&&A)||(!D&&C&&!B&&!A);
b=(!D&&C&&!B&&A)||(!D&&C&&B&&!A);
c=(!D&&!C&&B&&!A);
d=(!D&&!C&&!B&&A)||(!D&&C&&!B&&!A)||(!D&&C&&B&&A);
e=(!D&&!C&&!B&&A)||(!D&&!C&&B&&A)||(!D&&C&&!B&&!A)||(!D&&C&&!B&&A)||(!D&&C&&B&&A)||(D&&!C&&!B&&A);
f=(!D&&!C&&!B&&A)||(!D&&!C&&B&&!A)||(!D&&!C&&B&&A)||(!D&&C&&B&&A);
g=(!D&&!C&&!B&&!A)||(!D&&!C&&!B&&A)||(!D&&C&&B&&A);
digitalWrite(2,a);
digitalWrite(3,b);
digitalWrite(4,c);
digitalWrite(5,d);
digitalWrite(6,e);
digitalWrite(7,f);
digitalWrite(8,g);
}

