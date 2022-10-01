class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {

        vector<unordered_set<int>> rows(9, unordered_set<int>());
        vector<unordered_set<int>> columns(9, unordered_set<int>());
        vector<unordered_set<int>> boxes(9, unordered_set<int>());

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] == '.')
                {
                    continue;
                }
                int num = board[i][j] - '0';

                if (rows[i].count(num))
                {
                    return false;
                }

                if (columns[j].count(num))
                {
                    return false;
                }

                int boxInd = (i / 3) * 3 + j / 3;

                if (boxes[boxInd].count(num))
                {
                    return false;
                }

                rows[i].insert(num);
                columns[j].insert(num);
                boxes[boxInd].insert(num);
            }
        }
        return true;
    }
};