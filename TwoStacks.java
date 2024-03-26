import java.util.Scanner;

class TwoStacks {
    private int[] array;
    private int size;
    private int top1, top2;

    public TwoStacks(int size) {
        this.size = size;
        array = new int[size];
        top1 = -1;
        top2 = size;
    }

    public void push1(int value) {
        if (top1 < top2 - 1) {
            array[++top1] = value;
        } else {
            System.out.println("Stack 1 Overflow");
        }
    }

    public void push2(int value) {
        if (top1 < top2 - 1) {
            array[--top2] = value;
        } else {
            System.out.println("Stack 2 Overflow");
        }
    }

    public int pop1() {
        if (top1 >= 0) {
            return array[top1--];
        } else {
            System.out.println("Stack 1 Underflow");
            return -1; // or throw an exception
        }
    }

    public int pop2() {
        if (top2 < size) {
            return array[top2++];
        } else {
            System.out.println("Stack 2 Underflow");
            return -1; // or throw an exception
        }
    }

    public void printStack1() {
        for (int i = top1; i >= 0; i--) {
            System.out.print(array[i] + " ");
        }
        System.out.println();
    }

    public void printStack2() {
        for (int i = top2; i < size; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();
    }
}


    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = scanner.nextInt();
        TwoStacks twoStacks = new TwoStacks(size);

        System.out.println("Enter elements for Stack 1:");
        for (int i = 0; i < size; i++) {
            int value = scanner.nextInt();
            twoStacks.push1(value);
        }

        System.out.println("Enter elements for Stack 2:");
        for (int i = 0; i < size; i++) {
            int value = scanner.nextInt();
            twoStacks.push2(value);
        }

        System.out.println("Stack 1:");
        twoStacks.printStack1();
        System.out.println("Stack 2:");
        twoStacks.printStack2();

        System.out.println("Popping from Stack 1: " + twoStacks.pop1());
        System.out.println("Popping from Stack 2: " + twoStacks.pop2());

        System.out.println("Stack 1:");
        twoStacks.printStack1();
        System.out.println("Stack 2:");
        twoStacks.printStack2();

        scanner.close();
    }

