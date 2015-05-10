class Dummy {
    public:
        Dummy(){}
        Dummy(int element) {
            value = element;
        }
        void add(int element) {
            value += element;
        }
        int get() {
            return value;
        }

    private:
        int value;
};
