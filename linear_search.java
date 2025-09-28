public class LinearSearch {

    /**
     * Performs a linear search on an array to find a target element.
     *
     * @param arr The array to search within.
     * @param target The element to search for.
     * @return The index of the target element if found, otherwise -1.
     */
    public static int linearSearch(int[] arr, int target) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) {
                return i; // Element found, return its index
            }
        }
        return -1; // Element not found
    }

    public static void main(String[] args) {
        int[] numbers = {10, 25, 8, 42, 15, 7};
        int target1 = 42;
        int target2 = 99;

        int index1 = linearSearch(numbers, target1);
        if (index1 != -1) {
            System.out.println(target1 + " found at index: " + index1);
        } else {
            System.out.println(target1 + " not found in the array.");
        }

        int index2 = linearSearch(numbers, target2);
        if (index2 != -1) {
            System.out.println(target2 + " found at index: " + index2);
        } else {
            System.out.println(target2 + " not found in the array.");
        }
    }
}
