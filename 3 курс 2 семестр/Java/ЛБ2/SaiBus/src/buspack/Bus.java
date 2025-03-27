package buspack;

import java.util.ArrayList;

public class Bus {
    String driver;
    int numBus;
    int numRoute;
    String brand;
    int year;
    int mileage;

    public Bus(String driver, int numBus, int numRoute, String brand, int year, int millage) {
        this.driver = driver;
        this.numBus = numBus;
        this.numRoute = numRoute;
        this.brand = brand;
        this.year = year;
        this.mileage = millage;
    }

    public String getDriver() {
        return driver;
    }

    public void setDriver(String driver) {
        this.driver = driver;
    }

    public int getNumBus() {
        return numBus;
    }

    public void setNumBus(int numBus) {
        this.numBus = numBus;
    }

    public int getNumRoute() {
        return numRoute;
    }

    public void setNumRoute(int numRoute) {
        this.numRoute = numRoute;
    }

    public String getBrand() {
        return brand;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public int getYear() {
        return year;
    }

    public void setYear(int year) {
        this.year = year;
    }

    public int getMileage() {
        return mileage;
    }

    public void setMileage(int mileage) {
        this.mileage = mileage;
    }

    public static void findRoute(int route, Bus[] bus) {
        boolean founded = false;
        ArrayList<Integer> results = new ArrayList<Integer>();
        for (int i = 0; i < bus.length; i++) {
            if (bus[i].getNumRoute() == route){
                //System.out.println(bus[i]);
                results.add(i);
                founded = true;
            }
        }
        if (!founded) {
            System.out.println("Автобусы не найдены!");
        } else {
            System.out.println("Найдены автобусы: " + results + ".");
        }
    }

    public static void findYear10(int currentYear, Bus[] bus){
        boolean founded = false;
        ArrayList<Integer> results = new ArrayList<Integer>();
        for (int i = 0; i < bus.length; i++) {
            if (currentYear - bus[i].getYear() > 10){
                //System.out.println(bus[i]);
                results.add(i);
                founded = true;
            }
        }
        if (!founded) {
            System.out.println("Автобусы не найдены!");
        } else {
            System.out.println(results + ".");
        }
    }

    public static void findMilage10000(Bus[] bus){
        boolean founded = false;
        ArrayList<Integer> results = new ArrayList<Integer>();
        for (int i = 0; i < bus.length; i++) {
            if (bus[i].getMileage() > 10000){
                //System.out.println(bus[i]);
                results.add(i);
                founded = true;
            }
        }
        if (!founded) {
            System.out.println("Автобусы не найдены!");
        } else {
            System.out.println(results + ".");
        }
    }

    @Override
    public String toString() {
        return "Bus{" +
                "driver='" + driver + '\'' +
                ", numBus=" + numBus +
                ", numRoute=" + numRoute +
                ", brand='" + brand + '\'' +
                ", year=" + year +
                ", mileage=" + mileage +
                '}';
    }
}
