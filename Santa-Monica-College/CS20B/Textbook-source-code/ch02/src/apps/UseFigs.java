package apps;

import figures.*;

public class UseFigs
{
   public static void main(String[] args)
   {
      FigureInterface myCircle = new Circle(5);
      System.out.println(myCircle.perimeter());
      System.out.println(myCircle.area());
      FigureInterface myRectangle = new Rectangle(7, 8);
      System.out.println(myRectangle.perimeter());
      System.out.println(myRectangle.area());
   }
}