public class SortArray {

    public static void main(String[] args) {
        // int array
        int[] intarray = {8, 2, 1, 4, 7, 5, 3, 6};
		
        array_sorting(intarray);
        System.out.println(Arrays.toString(intarray));
    }

    private static void array_sorting(int[] intarray) {
        Arrays.sort(intarray);
    }
	
}
