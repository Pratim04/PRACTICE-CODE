// package JAVA.THREADS-ADV-BASICS;

class MyThread extends Thread {
    public void run() {
        System.out.println("Thread is running...");
    }
}

public class thread {
    public static void main(String[] args) {
        MyThread t1 = new MyThread();
        t1.start();
    }
}