class Box {
    private:
       int length;
       int width;
       int height;
    public:
      void setLength(float l);
      void setWidth(float w);
      void setHeight(float h);
      int getLength();
      int getWidth();
      int getHeight();
      
      int calcVolume();
};
