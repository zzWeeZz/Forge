namespace Forge
{
    template<typename T>
    class RingBuffer
    {
    public:
        RingBuffer() = default;
        ~RingBuffer() = default;
        void PushBack(const T& object);
        void PopFront();

    private:
        int* m_Buffer;
        size_t m_Size;

    };
}
