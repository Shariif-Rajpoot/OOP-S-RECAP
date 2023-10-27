book(const book &original)
    {
        author = original.author;
        title = original.title;
        rateCounter = original.rateCounter;
        rate = new float[rateCounter];
        for (int i = 0; i < rateCounter; i++)
        {
            rate[i] = original.rate[i];
        }
    }