public class SortArray {
    public static void main(String[] args) {
        // Example int array
        int[] intArr = {2, 1, 4, 5, 1000000};
        sortArray(intArr);
        System.out.println(Arrays.toString(intArr));
    }

    private static void sortArray(int[] intArr) {
        Arrays.sort(intArr);
    }
}