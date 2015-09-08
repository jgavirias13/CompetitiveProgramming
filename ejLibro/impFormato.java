/**
* @file impFormato.java
* @brief 
* @author Juan Pablo Gaviria
* @version 1
* @date 2015-08-25
*/

import java.util.Scanner;

class impFormato{
  public static void main(String[] Args){
    Scanner sc = new Scanner(System.in);
    double ent = sc.nextDouble();
    System.out.printf("%7.3f%n", ent);
  }
}
