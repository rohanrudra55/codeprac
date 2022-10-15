 class Box //Question 1
{
int length,breadth,height;
Box(int l,int b,int h)
{
length=l;
breadth=b;
height=h;
}
void compute()
{
int volume;
volume=length*breadth*height;
System.out.println("Volume="+volume);
}
}