import java.util.Calendar;
import java.util.GregorianCalendar;
import java.util.Scanner;

class diaSemana{
  public static void main(String[] Args){
    Scanner sc = new Scanner(System.in);
    int year = sc.nextInt();
    int month = sc.nextInt();
    int day = sc.nextInt();
    Calendar calendar = new GregorianCalendar(year, month, day);
    System.out.println(calendar.get(Calendar.DAY_OF_WEEK));
  }
} 
