#include "huffman.h"

// Huffman coding algorithm implementation in C++
int main()
{
    string text = "When Uddhab Gautam got his first vaccine dose back in February, Covid-19 cases in Nepal were low.Now, three months later, coronavirus infections in the Himalayan nation have spiraled out of control, leading to a shortage of hospital beds and oxygen, and sending most of the country into lockdown.But despite needing it more than ever, the 67-year-old retired banker has no idea when he'll get his second dose of Covishield, the AstraZeneca vaccine manufactured by the Serum Institute of India (SII). As an older person, I'm afraid of contracting the virus. he said from his home in Nepal's capital Kathmandu.";
    buildHuffmanTree(text);
    printf("hello");
    return 0;
}
