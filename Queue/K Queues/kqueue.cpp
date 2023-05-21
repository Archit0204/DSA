#include<iostream>

using namespace std;

class kQueue{
    private:
        int n;
        int k;
        int *front;
        int *rear;
        int *arr;
        int *next;
        int freeSpot;
    
    public:

        kQueue(int n, int k)
        {
            this->k = k;
            this->n = n;

            front = new int[k];
            rear = new int[k];

            for (int i = 0;i<k;i++)
            {
                front[i] = -1;
                rear[i] = -1;
            }

            arr = new int[n];
            next = new int[n];

            for(int i = 0;i<n;i++)
            {
                next[i] = i+1;
            }

            // intialising last element as -1 
            next[n-1] = -1;

            freeSpot = 0;
        }

        void enqueue(int x, int qn)
        {
            // overflow
            if (freeSpot == -1)
            {
                cout << "No Space available in the queue" << endl;
                return;
            }

            // find first free index
            int index = freeSpot;

            // update freespot
            freeSpot = next[index];

            // check whether first element
            if (front[qn-1] == -1)
            {
                front[qn-1] = index;
            }

            else
            {
                // link new element to the prev element
                next[rear[qn-1]] = index;
            }

            // update next
            next[index] = -1;

            // update rear
            rear[qn-1] = index;

            // push element
            arr[index] = x;
        }

        int dequeue(int qn)
        {
            // underflow check
            if (front[qn-1] == -1)
            {
                cout << "Underflow ";
                return -1;
            }

            // find index
            int index = front[qn-1];

            // update front
            front[qn-1] = next[index];

            // manage freeSpot
            next[index] = freeSpot;  // this eqn makes the index of 'next' point to the next freeSpot
            freeSpot = index;        // this eqn makes the index as first freeSpot since it is popped now

            return arr[index];
        }
};

int main()
{
    kQueue k(10, 3);

    k.enqueue(2, 1);
    k.enqueue(6, 1);
    k.enqueue(8, 3);
    k.enqueue(12, 2);

    cout << k.dequeue(2) << endl;
    cout << k.dequeue(1) << endl;
    cout << k.dequeue(2) << endl;
    cout << k.dequeue(3) << endl;
    cout << k.dequeue(1) << endl;
    cout << k.dequeue(1) << endl;

    return 0;
}