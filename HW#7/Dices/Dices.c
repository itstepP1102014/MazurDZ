int dicesScore()
{
    return rand() % 6 + 1;
}

void dicesThrow (int a)
{
    printf("+---+\n");
    switch(a)
    {
    case 1:
        printf("|   |\n| 0 |\n|   |\n");
        break;
    case 2:
        printf("|0  |\n|   |\n|  0|\n");
        break;
    case 3:
        printf("|0  |\n| 0 |\n|  0|\n");
        break;
    case 4:
        printf("|0 0|\n|   |\n|0 0|\n");
        break;
    case 5:
        printf("|0 0|\n| 0 |\n|0 0|\n");
        break;
    case 6:
        printf("|000|\n|   |\n|000|\n");
        break;
    }
    printf("+---+\n");
}

int dicesRoll()
{
    int scoreCurrent = 0, scoreTotal = 0;
    for(int i = 0, i < 2; ++i)
    {
        scoreCurrent = dicesScore();
        dicesThrow(scoreCurrent);
        scoreTotal += scoreCurrent;
    }

    return scoreTotal;
}
