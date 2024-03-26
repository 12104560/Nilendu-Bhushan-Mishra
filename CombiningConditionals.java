import java.util.Scanner;
public class CombiningConditionals {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int marks=sc.nextInt();
        if(marks>=70 && marks<=80)
        {
            System.out.println("B");
        }
        else if(marks>=80 && marks<90)
        {
            System.out.println("A");
        }
        else if(marks>=90 && marks<=100)
        {
            System.out.println("A+");
        }
        else
        {
            System.out.println("Passed");
        }
    }
}
