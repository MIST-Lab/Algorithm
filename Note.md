## 堆排序
 1. 堆
 堆中某个节点的值总是大于等于其子节点的值，并且堆是一颗完全二叉树。
 堆可以用数组来表示，这是因为堆是完全二叉树，而且完全二叉树很容易就存储在数组中。位置k的节点的父节点位置为k/2
 而它的两个字节点位置分别为 2k 和 2k + 1。这里不使用数组索引为0 的位置是为了更清晰地描述节点的位置关系。
 public class Heap<T extends Comparable<T>> {
  private T[] heap;
  private int N = 0;
  
  public Heap(int maxN) {
    this.heap = (T[]) new Comparable[maxN + 1];
   }
   public boolean isEmpty() {
    return N == 0;
   }
   public boolean less(int i,int j) {
    return heap[i].compareTo(heap[j]) < 0;
   }
   
   private void swap(int i,int j) {
    T t = heap[i];
    heap[i] = heap[j];
    heap[j] = t;
   }
 }
