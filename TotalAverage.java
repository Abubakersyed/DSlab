class TotalAverage 
{
	static int a;
	static int b;
	static int total;
	static double average;

	public static void calculate() 
	{
		total = a+b;
		average = total/2.0;
	}

public static void main(String args[]){
	a=Integer.parseInt(args[0]);
    b=Integer.parseInt(args[1]);

calculate();
System.out.println("first no:"+a);
System.out.println("second no:"+b);
System.out.println("total:"+total);
System.out.println("average:"+average);


}
}