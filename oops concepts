package OOPSinJAVA;
public  class Vehicle {
    int wheelcount;
    double price;
    String model;

    void start() {
        System.out.println("showing vehicle class");
      System.out.println(this.price);

    }
    Vehicle() {
        System.out.println("its a constructor of vehicle class");
    }
}
public class Car extends Vehicle {
      String colour;
   final void start() {

       super.start();
        System.out.println("showing car class");
    }
    Car(int count) {
        wheelcount = count;

        System.out.println("its a constructor of car class");
    }

      public static void main(String[] args) {
         Car scorpio = new Car();
          scorpio.wheelcount = 4;
          scorpio.price = 13.6;
          scorpio.model = "s11";
         System.out.println(scorpio.price);
          System.out.println(scorpio.wheelcount);
          System.out.println(scorpio.model);
           scorpio.start();
     }
    }
public class Maruti extends Car {

     void stamp() {
         Rajat obj = new Rajat();
         obj.power(this);
         super.start();
    }
    Maruti() {
         super(2);
         System.out.println("constructor of Maruti class");
    }
    public static void main(String[] args) {

        Maruti eight100 = new Maruti();
        System.out.println(eight100.wheelcount);
        eight100.wheelcount = 4;

        eight100.price = 2.60;
        eight100.model = "triumph";
        eight100.colour = "White";
        System.out.println(eight100.price);
        System.out.println(eight100.wheelcount);
        System.out.println(eight100.model);
        System.out.println(eight100.colour);
        eight100.start();
    }
    }
    class Rajat {
    void power(Maruti car) {
        System.out.println(car.price);
    }
    }
