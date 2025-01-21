#ifndef PE3_DMA_H_
#define PE3_DMA_H_
#include <iostream>

class abcDMA
{
private:
    char *label;
    int rating;

public:
    abcDMA(const char *l = "null", int r = 0);
    abcDMA(const abcDMA &a);
    virtual ~abcDMA();
    abcDMA &operator=(const abcDMA &a);
    friend std::ostream &operator<<(std::ostream &os, const abcDMA &a);
    virtual void view() const = 0;
};

class baseDMA : public abcDMA
{
public:
    baseDMA(const char *l = "null", int r = 0);
    baseDMA(const baseDMA &a);
    virtual ~baseDMA();
    baseDMA &operator=(const baseDMA &a);
    friend std::ostream &operator<<(std::ostream &os, const baseDMA &a);
    virtual void view() const;
};

class lacksDMA : public abcDMA
{
public:
    static const int COL_LEN = 40;

private:
    // enum
    // {
    //     COL_LEN = 40
    // };
    char color[COL_LEN];

public:
    lacksDMA(const char *c = "blank", const char *l = "null", int r = 0);
    lacksDMA(const lacksDMA &a);
    virtual ~lacksDMA();
    lacksDMA &operator=(const lacksDMA &a);
    friend std::ostream &operator<<(std::ostream &os, const lacksDMA &a);
    virtual void view() const;
};

class hasDMA : public abcDMA
{
private:
    char *style;

public:
    hasDMA(const char *s = "none", const char *l = "null", int r = 0);
    hasDMA(const hasDMA &a);
    virtual ~hasDMA();
    hasDMA &operator=(const hasDMA &a);
    friend std::ostream &operator<<(std::ostream &os, const hasDMA &a);
    virtual void view() const;
};

#endif