class ArrayList {
  private:
    int *arr;
    int num_elements;
    int capacity;
  public:
    ArrayList(int size);
    void insert(int val);
    void resize(); 
    int length();
    void print(); 
  	int getAt(int index);
};
