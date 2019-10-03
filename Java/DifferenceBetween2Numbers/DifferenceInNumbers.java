public class DifferenceInNumbers {

    public static int getIntDifference(int aNumber, int anotherNumber) {
        if (aNumber > anotherNumber) {
            return aNumber - anotherNumber;
        } else {
            return anotherNumber - aNumber;
        }
    }

    public static double getDoubleDifference(double aNumber, double anotherNumber) {
        if (aNumber > anotherNumber) {
            return aNumber - anotherNumber;
        } else {
            return anotherNumber - aNumber;
        }
    }

    private static void printIntDifferences(int arg0, int arg1) {
        System.out.println(String.format("Difference between %d and %d: %d", arg0, arg1, getIntDifference(arg0, arg1)));
    }

    private static void printDoubleDifferences(double arg0, double arg1) {
        System.out.println(String.format("Difference between %d and %d: %d", arg0, arg1, getDoubleDifference(arg0, arg1)));
    }

    public static void main(String[] args) {
        try {
            if (args.length == 2) {
                int arg0 = Integer.parseInt(args[0]);
                int arg1 = Integer.parseInt(args[1]);
                printIntDifferences(arg0, arg1);
            } else if (args.length == 3) {
                switch (args[0]) {
                    case "-h":
                    case "--help":
                        printUsage();
                        System.exit(0);
                    case "-f":
                    case "--float":
                    case "-d":
                    case "--double":
                        double double1 = Double.parseDouble(args[1]);
                        double double2 = Double.parseDouble(args[2]);
                        printDoubleDifferences(double1, double2);
                        break;
                    case "-i":
                    case "--integer":
                        int int1 = Integer.parseInt(args[1]);
                        int int2 = Integer.parseInt(args[2]);
                        printIntDifferences(int1, int2);
                        break;
                    default:
                        printUsage();
                        System.exit(-1);
                }
            } else {
                printUsage();
            }
        } catch (NumberFormatException nfex) {
            System.err.println("Failed to parse expected numeric argument");
            printUsage();
            System.exit(-1);
        }
        System.exit(0);
    }

    public static void printUsage() {
        System.out.println("Usage: [OPTIONAL NUMERIC TYPE] [NUMBER 1] [NUMBER 2]" +
                "\n\t-f | --float : Use float numeric values " +
                "\n\t-d | --double : Use double numeric values " +
                "\n\t-i | --integer : Use float numeric values ** Default **" +
                "\n\t If Empty will use default integer "
        );
    }

}