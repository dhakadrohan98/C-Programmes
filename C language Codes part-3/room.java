class room
{
	float length;
	float breadth;
	void getdata(float a, float b)
	{
		length = a;
		breadth = b;
	}
}

class roomarea
{
	public static void main (String args[ ])
	{
		float area;
		room room1 = new room();
		room1.getdata(14,10);
		area=room1.lenght*room1.breadth;
		System.out.println("area ="+area);
	}
}
