import buspack.Bus;
import java.util.Scanner;
import java.time.Year;

public class Main {
    public static void main(String[] args) {
        int k = 5;
        Bus[] bus = new Bus[k];
        bus[0] = new Bus("A O S", 001, 01, "ToToBus", 1999, 13345);
        bus[1] = new Bus("B A G", 002, 02, "AeroBus", 2004, 11244);
        bus[2] = new Bus("S A D", 003, 04, "Mix", 2008, 10210);
        bus[3] = new Bus("L O G", 004, 06, "AeroBus", 2012, 7192);
        bus[4] = new Bus("G O D", 005, 02, "ToToBus", 2016, 3770);
        System.out.println("Список автобусов:");
        for (int i = 0; i < k; i++) {
            System.out.println("Автобус "+ i +": "+bus[i]);
        }

        System.out.println();
        System.out.print("Введите номер маршрута для вывода списка автобусов для заданного номера: ");
        Scanner console = new Scanner(System.in);
        int fRoute = console.nextInt();
        Bus.findRoute(fRoute, bus);


        System.out.println();
        int currentYear = Year.now().getValue();
        System.out.print("Список автобусов, которые эксплуатируются больше 10 лет: ");
        Bus.findYear10(currentYear, bus);

        System.out.println();
        System.out.print("Список автобусов, пробег у которых больше 10000 км: ");
        Bus.findMilage10000(bus);
    }
}