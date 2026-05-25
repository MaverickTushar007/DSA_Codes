if (nums[mid] == target)
        {
            cout << mid;
            return 0; // exit once found
        }
        else if (nums[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;