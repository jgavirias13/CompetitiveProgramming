import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

class ordenFecha{
  static class Fecha implements Comparable<Fecha>{
    int date;
    int month;
    int year;
    public Fecha(int date, int month, int year){
      this.date = date;
      this.month = month;
      this.year = year;
    }

    @Override
    public int compareTo(Fecha f){
      if(month > f.month){
        return -1;
      }else if(month < f.month){
        return 1;
      }else{
        if(date > f.date){
          return -1;
        }else if(date < f.date){
          return 1;
        }else{
          if(year > f.year){
            return -1;
          }else if(year < f.year){
            return 1;
          }else{
            return 0;
          }
        }
      }
    }
  }

  public static void main(String[] Args){
    Scanner sc = new Scanner(System.in);
    ArrayList <Fecha> lista = new ArrayList<Fecha>();
    int b = 5;
    while (b>0){
      int year;
      int month;
      int day;
      day = sc.nextInt();
      month = sc.nextInt();
      year = sc.nextInt();
      Fecha tmp = new Fecha(day, month, year);
      lista.add(tmp);
      --b;
    }
    Collections.sort(lista);
    for(int i = 0; i< lista.size(); i++){
      System.out.println(lista.get(i).date + " " + lista.get(i).month + " " + lista.get(i).year);
    }
  }
}
