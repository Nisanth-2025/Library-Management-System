#include <iostream>
#include <limits>
#include <exception>
#include <unordered_map>
#include <string>
#include <ctime>
using namespace std;

class Books {
protected:
    struct Book {
        string ISBN;
        string title;
        string author;
        string publisher;
        string genre;
        int year;
        int copies;
    };

    unordered_map<string, Book> business_books;
    unordered_map<string, Book> investment_books;
    unordered_map<string, Book> accounting_books;
    unordered_map<string, Book> wealth_books;
    unordered_map<string, Book> selfhelp_books;

public:
    Books() {
        Assign_Business_Books();
        Assign_Investment_Books();
        Assign_Accounting_Books();
        Assign_Wealth_Books();
        Assign_SelfHelp_Books();
    }

    void Assign_Business_Books() {
        business_books["9780062316110"] = {"9780062316110", "Start With Why", "Simon Sinek", "Portfolio", "Business", 2009, 10};
        business_books["9780066620992"] = {"9780066620992", "Good to Great", "Jim Collins", "HarperBusiness", "Business", 2001, 12};
        business_books["9780307463746"] = {"9780307463746", "The Lean Startup", "Eric Ries", "Crown Business", "Business", 2011, 15};
        business_books["9780804139298"] = {"9780804139298", "The Innovator's Dilemma", "Clayton Christensen", "Harvard Business Review Press", "Business", 1997, 8};
        business_books["9780804139304"] = {"9780804139304", "Zero to One", "Peter Thiel", "Crown Business", "Business", 2014, 9};
        business_books["9781422184126"] = {"9781422184126", "The Hard Thing About Hard Things", "Ben Horowitz", "HarperBusiness", "Business", 2014, 7};
        business_books["9781501144318"] = {"9781501144318", "Dare to Lead", "Brené Brown", "Random House", "Business", 2018, 11};
        business_books["9781591844358"] = {"9781591844358", "The 4-Hour Workweek", "Tim Ferriss", "Crown Publishing", "Business", 2007, 10};
        business_books["9780241257433"] = {"9780241257433", "Leaders Eat Last", "Simon Sinek", "Portfolio", "Business", 2014, 8};
        business_books["9781591848289"] = {"9781591848289", "Radical Candor", "Kim Scott", "St. Martin's Press", "Business", 2017, 9};
    }

    void Assign_Investment_Books() {
        investment_books["9780060555665"] = {"9780060555665", "The Intelligent Investor", "Benjamin Graham", "HarperBusiness", "Investment", 2006, 12};
        investment_books["9780471119272"] = {"9780471119272", "Security Analysis", "Benjamin Graham & David Dodd", "McGraw-Hill", "Investment", 2008, 10};
        investment_books["9780471384889"] = {"9780471384889", "Common Stocks and Uncommon Profits", "Philip A. Fisher", "Wiley", "Investment", 2000, 8};
        investment_books["9780393358384"] = {"9780393358384", "A Random Walk Down Wall Street", "Burton G. Malkiel", "W. W. Norton & Company", "Investment", 2019, 12};
        investment_books["9780470138137"] = {"9780470138137", "The Little Book of Common Sense Investing", "John C. Bogle", "Wiley", "Investment", 2007, 15};
        investment_books["9780143118756"] = {"9780143118756", "The Essays of Warren Buffett", "Warren Buffett & Lawrence Cunningham", "Penguin", "Investment", 2001, 10};
        investment_books["9780471445490"] = {"9780471445490", "Market Wizards", "Jack D. Schwager", "Wiley", "Investment", 1989, 7};
        investment_books["9780393353158"] = {"9780393353158", "The Big Short", "Michael Lewis", "W. W. Norton & Company", "Investment", 2010, 9};
        investment_books["9780393247027"] = {"9780393247027", "Flash Boys", "Michael Lewis", "W. W. Norton & Company", "Investment", 2014, 8};
        investment_books["9780452285472"] = {"9780452285472", "The Millionaire Next Door", "Thomas J. Stanley & William D. Danko", "Taylor Trade Publishing", "Investment", 1996, 11};
    }

    void Assign_Accounting_Books() {
        accounting_books["9781118951747"] = {"9781118951747", "Financial Accounting", "Robert Libby", "McGraw-Hill", "Accounting", 2018, 12};
        accounting_books["9781260266153"] = {"9781260266153", "Intermediate Accounting", "Donald E. Kieso", "Wiley", "Accounting", 2019, 10};
        accounting_books["9780078025883"] = {"9780078025883", "Accounting Principles", "Jerry J. Weygandt", "McGraw-Hill", "Accounting", 2018, 9};
        accounting_books["9781119444657"] = {"9781119444657", "Managerial Accounting", "Ray H. Garrison", "McGraw-Hill", "Accounting", 2018, 11};
        accounting_books["9780134082829"] = {"9780134082829", "Accounting for Dummies", "John A. Tracy", "For Dummies", "Accounting", 2016, 8};
        accounting_books["9781119579547"] = {"9781119579547", "Advanced Accounting", "Joe Ben Hoyle", "McGraw-Hill", "Accounting", 2020, 7};
        accounting_books["9781259589836"] = {"9781259589836", "Financial & Managerial Accounting", "Carl S. Warren", "Cengage Learning", "Accounting", 2019, 9};
        accounting_books["9781260083565"] = {"9781260083565", "Accounting Information Systems", "Marshall Romney", "Pearson", "Accounting", 2019, 10};
        accounting_books["9781119493571"] = {"9781119493571", "Auditing & Assurance Services", "William F. Messier Jr.", "McGraw-Hill", "Accounting", 2018, 8};
        accounting_books["9781260262704"] = {"9781260262704", "Cost Accounting", "Charles T. Horngren", "Pearson", "Accounting", 2018, 11};

    }

    void Assign_Wealth_Books() {
        wealth_books["9781612680194"] = {"9781612680194", "Rich Dad Poor Dad", "Robert Kiyosaki", "Plata Publishing", "Money", 2017, 15};
        wealth_books["9781533667922"] = {"9781533667922", "The Simple Path to Wealth", "JL Collins", "CreateSpace Independent Publishing Platform", "Money", 2016, 12};
        wealth_books["9781118807276"] = {"9781118807276", "Your Money or Your Life", "Vicki Robin & Joe Dominguez", "Penguin", "Money", 2018, 10};
        wealth_books["9781591848300"] = {"9781591848300", "I Will Teach You to Be Rich", "Ramit Sethi", "Workman Publishing", "Money", 2019, 9};
        wealth_books["9780399575447"] = {"9780399575447", "The Millionaire Next Door", "Thomas J. Stanley & William D. Danko", "Taylor Trade Publishing", "Money", 1996, 11};
        wealth_books["9781501124020"] = {"9781501124020", "The Psychology of Money", "Morgan Housel", "Harriman House", "Money", 2020, 10};
        wealth_books["9780399174016"] = {"9780399174016", "The Richest Man in Babylon", "George S. Clason", "Penguin", "Money", 2003, 8};
        wealth_books["9781118954281"] = {"9781118954281", "Money: Master the Game", "Tony Robbins", "Simon & Schuster", "Money", 2014, 9};
        wealth_books["9780307949486"] = {"9780307949486", "The Total Money Makeover", "Dave Ramsey", "Thomas Nelson", "Money", 2003, 12};
        wealth_books["9780735211292"] = {"9780735211292", "Financial Freedom", "Grant Sabatier", "Penguin Life", "Money", 2019, 7};
    }

    void Assign_SelfHelp_Books() {
        selfhelp_books["9780143127741"] = {"9780143127741", "Atomic Habits", "James Clear", "Avery", "Self-Help", 2018, 15};
        selfhelp_books["9781594634024"] = {"9781594634024", "The Power of Now", "Eckhart Tolle", "New World Library", "Self-Help", 1997, 10};
        selfhelp_books["9780307465351"] = {"9780307465351", "The Subtle Art of Not Giving a F*ck", "Mark Manson", "Harper", "Self-Help", 2016, 12};
        selfhelp_books["9780671027032"] = {"9780671027032", "How to Win Friends & Influence People", "Dale Carnegie", "Pocket Books", "Self-Help", 1936, 8};
        selfhelp_books["9780143105756"] = {"9780143105756", "The 7 Habits of Highly Effective People", "Stephen R. Covey", "Free Press", "Self-Help", 1989, 11};
        selfhelp_books["9780062515672"] = {"9780062515672", "Daring Greatly", "Brené Brown", "Penguin", "Self-Help", 2012, 9};
        selfhelp_books["9780143127742"] = {"9780143127742", "You Are a Badass", "Jen Sincero", "Running Press", "Self-Help", 2013, 10};
        selfhelp_books["9780812981605"] = {"9780812981605", "Mindset", "Carol S. Dweck", "Ballantine Books", "Self-Help", 2006, 12};
        selfhelp_books["9781501161933"] = {"9781501161933", "Can't Hurt Me", "David Goggins", "Lioncrest Publishing", "Self-Help", 2018, 9};
        selfhelp_books["9780143125785"] = {"9780143125785", "Grit", "Angela Duckworth", "Scribner", "Self-Help", 2016, 8};
    }

};

class Access_Books : protected Books
{
    private:
    int choice;
    protected:

    pair<string, string> Fetch_By_ISBN(const string &ISBN)
    {
        if (business_books.find(ISBN) != business_books.end())
            return {business_books[ISBN].title, business_books[ISBN].author};
        if (investment_books.find(ISBN) != investment_books.end())
            return {investment_books[ISBN].title, investment_books[ISBN].author};
        if (accounting_books.find(ISBN) != accounting_books.end())
            return {accounting_books[ISBN].title, accounting_books[ISBN].author};
        if (wealth_books.find(ISBN) != wealth_books.end())
            return {wealth_books[ISBN].title, wealth_books[ISBN].author};
        if (selfhelp_books.find(ISBN) != selfhelp_books.end())
            return {selfhelp_books[ISBN].title, selfhelp_books[ISBN].author};

        return {"Book not found", "Unknown"};
    }

    void Fetch_Business_Books()
    {
        cout<< "==================\n";
        cout<< "Business Books" << endl;
        cout<< "==================\n";
        cout << endl;
        for (const auto &pair : business_books) {
            const Book &b = pair.second;
            cout << "ISBN: " << b.ISBN << "\n";
            cout << "Title: " << b.title << "\n";
            cout << "Author: " << b.author << "\n";
            cout << "Publisher: " << b.publisher << "\n";
            cout << "Genre: " << b.genre << "\n";
            cout << "Year: " << b.year << "\n";
            cout << "Copies: " << b.copies << "\n";
            cout << endl;
        }
        while (true)
        {
            try
            {
                cout << "Enter 0 to go Back : ";
                cin >> choice;
                if (choice == 0)
                {
                    break;
                }
            }
            catch (ios_base::failure &)
            {
                cout << "Invalid input! Please enter numbers only.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }
    void Fetch_Investment_Books()
    {
        cout<< "==================\n";
        cout << "Investment Books" << endl;
        cout<< "==================\n";
        cout << endl;
        for (const auto &pair : investment_books) {
            const Book &b = pair.second;
            cout << "ISBN: " << b.ISBN << "\n";
            cout << "Title: " << b.title << "\n";
            cout << "Author: " << b.author << "\n";
            cout << "Publisher: " << b.publisher << "\n";
            cout << "Genre: " << b.genre << "\n";
            cout << "Year: " << b.year << "\n";
            cout << "Copies: " << b.copies << "\n";
            cout << endl;
        }
        while (true)
        {
            try
            {
                cout << "Enter 0 to go Back : ";
                cin >> choice;
                if (choice == 0)
                {
                    break;
                }
            }
            catch (ios_base::failure &e)
            {
                cout << "Invalid input! Please enter numbers only.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }
    void Fetch_Accounting_Books()
    {
        cout<< "==================\n";
        cout << "Accounting Books" << endl;
        cout<< "==================\n";
        cout << endl;
        for (const auto &pair : accounting_books) {
            const Book &b = pair.second;
            cout << "ISBN: " << b.ISBN << "\n";
            cout << "Title: " << b.title << "\n";
            cout << "Author: " << b.author << "\n";
            cout << "Publisher: " << b.publisher << "\n";
            cout << "Genre: " << b.genre << "\n";
            cout << "Year: " << b.year << "\n";
            cout << "Copies: " << b.copies << "\n";
            cout << endl;
        }
        while (true)
        {
            try
            {
                cout << "Enter 0 to go Back : ";
                cin >> choice;
                if (choice == 0)
                {
                    break;
                }
            }
            catch (ios_base::failure &e)
            {
                cout << "Invalid input! Please enter numbers only.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }
    void Fetch_Wealth_Books()
    {
        cout<< "==================\n";
        cout << "Wealth Books" << endl;
        cout<< "==================\n";
        cout << endl;
        for (const auto &pair : wealth_books) {
            const Book &b = pair.second;
            cout << "ISBN: " << b.ISBN << "\n";
            cout << "Title: " << b.title << "\n";
            cout << "Author: " << b.author << "\n";
            cout << "Publisher: " << b.publisher << "\n";
            cout << "Genre: " << b.genre << "\n";
            cout << "Year: " << b.year << "\n";
            cout << "Copies: " << b.copies << "\n";
            cout << endl;
        }
        while (true)
        {
            try
            {
                cout << "Enter 0 to go Back : ";
                cin >> choice;
                if (choice == 0)
                {
                    break;
                }
            }
            catch (ios_base::failure &e)
            {
                cout << "Invalid input! Please enter numbers only.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }
    void Fetch_Selfhelp_Books()
    {
        cout<< "==================\n";
        cout << "SelfHelp_books" << endl;
        cout<< "==================\n";
        cout << endl;
        for (const auto &pair : selfhelp_books) {
            const Book &b = pair.second;
            cout << "ISBN: " << b.ISBN << "\n";
            cout << "Title: " << b.title << "\n";
            cout << "Author: " << b.author << "\n";
            cout << "Publisher: " << b.publisher << "\n";
            cout << "Genre: " << b.genre << "\n";
            cout << "Year: " << b.year << "\n";
            cout << "Copies: " << b.copies << "\n";
            cout << endl;
        }
        while (true)
        {
            try
            {
                cout << "Enter 0 to go Back : ";
                cin >> choice;
                if (choice == 0)
                {
                    break;
                }
            }
            catch (ios_base::failure &e)
            {
                cout << "Invalid input! Please enter numbers only.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }
};



class Student_Credentials
{
protected:
    struct Students {
        string enroll_no;
        string password;
        string name;
        string email;
        string program;
        string department;
        string specialization;
        string year;
        string borrowed_book_ISBN;
        string borrow_date;
        string due_date;
        double fine;
    };

protected:
    unordered_map<string, Students> stud_cred;

public:
    Student_Credentials() {
        Initialize_Users();
    }

    void Initialize_Users()
    {
        stud_cred["A86605224001"] = {"A86605224001", "P@ssW0rd123!", "Ananya Singh", "ananya.s@s.amity.edu", "B.Tech", "CSE", "Software Engineering", "First", "9780062316110", "2025-10-01", "2025-10-15", 0.0};
        stud_cred["A86605224002"] = {"A86605224002", "T3ch!Guru#456", "Rahul Verma", "rahul.v@s.amity.edu", "B.Tech", "EE", "Embedded Systems", "Second", "9780060555665", "2025-10-02", "2025-10-16", 0.0};
        stud_cred["A86605224003"] = {"A86605224003", "M@thM!nd789", "Sneha Kapoor", "sneha.k@s.amity.edu", "B.Sc", "Mathematics", "Statistical Modelling", "Third", "9781118807276", "2025-10-03", "2025-10-17", 0.0};
        stud_cred["A86605224004"] = {"A86605224004", "Bio$Lab321!", "Rohit Mehta", "rohit.m@s.amity.edu", "B.Sc", "Biology", "Molecular Biology", "First", "9780143127741", "2025-10-04", "2025-10-18", 0.0};
        stud_cred["A86605224005"] = {"A86605224005", "Cyb3rS#cur3!", "Aisha Khan", "aisha.k@s.amity.edu", "B.Tech", "Cybersecurity", "Network Security", "Second", "9780471119272", "2025-10-05", "2025-10-19", 0.0};
        stud_cred["A86605224006"] = {"A86605224006", "R0b0tics#2025", "Vikram Joshi", "vikram.j@s.amity.edu", "B.Tech", "Robotics", "Robotics Special", "Third", "", "", "", 0.0};
        stud_cred["A86605224007"] = {"A86605224007", "F!nanceM@n123", "Neha Reddy", "neha.r@s.amity.edu", "MBA", "Finance", "Finance Special", "Second", "9780393358384", "2025-10-07", "2025-10-21", 0.0};
        stud_cred["A86605224008"] = {"A86605224008", "M@rk3t!ng789", "Karan Malhotra", "karan.m@s.amity.edu", "MBA", "Marketing", "Marketing Special", "First", "9780804139304", "2025-10-08", "2025-10-22", 0.0};
        stud_cred["A86605224009"] = {"A86605224009", "Hr@Skill$456", "Isha Gupta", "isha.g@s.amity.edu", "MBA", "HR", "HR Special", "Second", "", "", "", 0.0};
        stud_cred["A86605224010"] = {"A86605224010", "Dig!talBiz#2025", "Rohit Sharma", "rohit.s@s.amity.edu", "B.Tech", "CSE", "Software Engineering", "Second", "9780471384889", "2025-10-10", "2025-10-24", 0.0};
        stud_cred["A86605224011"] = {"A86605224011", "Astro@Phys!cs1", "Ankit Jain", "ankit.j@s.amity.edu", "B.Sc", "Physics", "Astrophysics", "Third", "9780143118756", "2025-10-11", "2025-10-25", 0.0};
        stud_cred["A86605224012"] = {"A86605224012", "MolB!o$Lab22", "Pooja Das", "pooja.d@s.amity.edu", "B.Sc", "Biology", "Biotech Research", "First", "9781591848289", "2025-10-12", "2025-10-26", 0.0};
        stud_cred["A86605224013"] = {"A86605224013", "Q!uantumC#55", "Varun Patel", "varun.p@s.amity.edu", "B.Sc", "Chemistry", "Quantum Chemistry", "Second", "9780393353158", "2025-10-13", "2025-10-27", 0.0};
        stud_cred["A86605224014"] = {"A86605224014", "Env!Mgmt2025", "Sakshi Arora", "sakshi.a@s.amity.edu", "B.Sc", "Environmental Science", "Environmental Management", "Third", "9781501144318", "2025-10-14", "2025-10-28", 0.0};
        stud_cred["A86605224015"] = {"A86605224015", "Cardio!@123", "Nikhil Verma", "nikhil.v@s.amity.edu", "MBBS", "Medicine", "Cardiology", "First", "9780307463746", "2025-10-15", "2025-10-29", 0.0};
    }
};

class Student_Login : protected Student_Credentials, protected Access_Books {
    private:
    int choice;

    protected:
    string user_id;
    string pass;

    public:
    Student_Login() {
        user_id = "";
        pass = "";
        choice = 0;
    }

    protected:
    void Student_Login_Info() {
        cout << "==================\n";
        cout << "STUDENT LOGIN\n";
        cout << "==================\n";
        while (true) {
            cout << "Enter your user-ID : ";
            cin >> user_id;
            if (stud_cred.find(user_id) != stud_cred.end()) {
                break;
            } else {
                cout << "User-ID Not Found! Please Enter a Valid User-ID.\n";
            }
        }
        while (true) {
            cout << "Enter your Password : ";
            cin >> pass;
            if (stud_cred[user_id].password == pass) {
                break;
            } else {
                cout << "Incorrect Password! Please Enter a Valid Password.\n";
            }
        }
        Update_Student_Fine();
        Student_Acc();
    }

    void Update_Student_Fine()
    {
        time_t now = time(0);
        tm *today = localtime(&now);

        for (auto &pair : stud_cred) {
            Students &s = pair.second;

            if (s.borrowed_book_ISBN.empty()) {
                s.fine = 0.0;
                continue;
            }

            // Parse due date YYYY-MM-DD
            tm due = {};
            due.tm_year = stoi(s.due_date.substr(0,4)) - 1900;
            due.tm_mon  = stoi(s.due_date.substr(5,2)) - 1;
            due.tm_mday = stoi(s.due_date.substr(8,2));

            // Calculate difference in days
            time_t due_time = mktime(&due);
            double diff = difftime(now, due_time);
            int overdue_days = diff > 0 ? diff / (60*60*24) : 0;

            s.fine = overdue_days * 20.0;
        }
    }

    void Account_Details()
    {
        int local_choice;
        cout << "==================\n";
        cout << "ACCOUNT DETAILS\n";
        cout << "==================\n";
        cout << "Name : " << stud_cred[user_id].name <<"\n";
        cout << "Enrollment No : " << stud_cred[user_id].enroll_no <<"\n";
        cout << "Year : " << stud_cred[user_id].year <<"\n";
        cout << "Program : " << stud_cred[user_id].program <<"\n";
        cout << "Department : " << stud_cred[user_id].department <<"\n";
        cout << "Specialization : " << stud_cred[user_id].specialization <<"\n";
        cout << "Mail-ID : " << stud_cred[user_id].email <<"\n";
        while (true)
        {
            try
            {
                cout << "Enter 0 to go Back : ";
                cin >> local_choice;
                if (local_choice == 0)
                {
                    break;
                }
            }
            catch (ios_base::failure &e)
            {
                cout << "Invalid input! Please enter numbers only.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }
    void My_Borrowings()
    {
        int choice;
        cout << "==================\n";
        cout << "MY BORROWINGS\n";
        cout << "==================\n";
        auto info = Fetch_By_ISBN(stud_cred[user_id].borrowed_book_ISBN);
        if (info.first != "Book not found")
        {
            cout << "Book Title: " << info.first << "\n";
            cout << "Author: " << info.second << "\n";
            cout << "Borrow Date: " << stud_cred[user_id].borrow_date << "\n";
            cout << "Due date: " << stud_cred[user_id].due_date << "\n";
            cout << "Fine: " << stud_cred[user_id].fine << "\n";
        }
        else
        {
            cout<< "You Haven't Borrowed any Books\n";
        }
        while (true)
        {
            try
            {
                cout << "Enter 0 to go Back : ";
                cin >> choice;
                if (choice == 0)
                {
                    break;
                }
            }
            catch (ios_base::failure &e)
            {
                cout << "Invalid input! Please enter numbers only.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }
    void View_Books()
    {
        start:
        int choice;
        cout << "==================\n";
        cout << "VIEW BOOKS\n";
        cout << "==================\n";
        cout << "1. Business Books\n" << "2. Investment Books\n" << "3. Accounting Books\n" << "4. Wealth Books\n" << "5. SelfHelp Books\n" << "6. Exit\n";
        while (true)
        {
            try
            {
                cout << "Enter your choice [1/2/3/4/5/6] : ";
                cin >> choice;
                if (choice == 1)
                {
                    Fetch_Business_Books();
                    goto start;
                }
                else if (choice == 2)
                {
                    Fetch_Investment_Books();
                    goto start;
                }
                else if (choice == 3)
                {
                    Fetch_Accounting_Books();
                    goto start;
                }
                else if (choice == 4)
                {
                    Fetch_Wealth_Books();
                    goto start;
                }
                else if (choice == 5)
                {
                    Fetch_Selfhelp_Books();
                    goto start;
                }
                else if (choice == 6)
                {
                    break;
                }
                else {
                    cout << "Invalid input! Please enter numbers ranging from 1 - 6\n";
                }
            }
            catch (ios_base::failure &e)
            {
                cout << "Invalid input! Please enter numbers only.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }

    }

    void Change_Password()
    {
        while (true)
        {
            string new_password;
            string confirm_password;
            cout<<"Please enter new password: ";
            cin>>new_password;
            cout<<"Please enter confirm password: ";
            cin>>confirm_password;
            if (new_password == confirm_password) {
                if (new_password!=stud_cred[user_id].password)
                {
                    stud_cred[user_id].password = new_password;
                    break;
                }
                else
                {
                    cout << "Password Matches Old Password.Please try again!\n";
                }
            }
            else
            {
               cout << "Password Doesn't Match.\n";
            }
        }
    }

    void Student_Acc()
    {
        start:
        cout << "==================\n";
        cout << "WELCOME " << stud_cred[user_id].name << "\n";
        cout << "==================\n";
        cout << "1. Account Details\n" << "2. My Borrowings\n" << "3. View Books\n" << "4. Change Password\n" << "5. Logout\n";
        cin.exceptions(ios::failbit);
        while (true) {
            try {
                cout << "Enter your Choice [1/2/3/4] : ";
                cin >> choice;
                if (choice == 1)
                {
                    Account_Details();
                    goto start;
                } else if (choice == 2)
                {
                    My_Borrowings();
                    goto start;
                }
                else if (choice == 3)
                {
                    View_Books();
                    goto start;
                }
                else if (choice == 4)
                {
                    Change_Password();
                    break;
                }
                else if (choice == 5)
                {
                    cout << "Logging Out...\n";
                    break;
                }
                else
                {
                    cout << "Please enter a number ranging from 1 - 5\n";
                }
            }
            catch (ios_base::failure &e)
            {
                cout << "Invalid input! Please enter numbers only.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }
};

class Login_Portal : Student_Login {
    private:
    int choice;

    public:
    Login_Portal() {
        choice = 0;
    }

    void Get_Choice() {
        start:
        cout << "==================\n";
        cout << "LOGIN PORTAL\n";
        cout << "==================\n";
        cout << "1. Student Login\n" << "2. Faculty Login\n" << "3. Admin Login\n" << "4. Quit\n";
        cin.exceptions(ios::failbit);
        while (true) {
            try {
                cout << "Enter your Choice [1/2/3/4] : ";
                cin >> choice;
                if (choice == 1) {
                    Student_Login_Info();
                    goto start;
                }
                else if (choice == 2)
                {
                    cout << "Under Development\n";
                    goto start;
                }
                else if (choice == 3)
                {
                    cout << "Under Development\n";
                    goto start;
                }
                else if (choice == 4)
                {
                    cout << "Quiting Application ...";
                    break;
                }
                else
                {
                    cout << "Please enter a number ranging from 1 - 4\n";
                }
            } catch (ios_base::failure &e) {
                cout << "Invalid input! Please enter numbers only.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }
};

int main() {
    Student_Credentials student_credentials;
    Student_Login student_login;
    Login_Portal login_portal;
    login_portal.Get_Choice();
    return 0;
}
