import java.util.ArrayList;
import java.util.List;

public class Employee1
{
    private int id;
    private String emp_name;
    private double salary;
    private Department Department;

    Employee1(int id,String emp_name,double salary,Department Department)
    {
        this.id = id;
        this.emp_name = emp_name;
        this.salary = salary;
        this.Department = Department;
    }
    public int getid()
    {
    return id;
    }
    public void setid(int id)
    {
        this.id = id;
    }
    public String getemp_name()
    {
    return emp_name;
    }
    void setid(String emp_name)
    {
        this.emp_name = emp_name;
    }
    public double getsalary()
    {
    return salary;
    }
    void setsalary(double salary)
    {
        this.salary = salary;
    }
    public Department getDepartment()
    {
    return Department;
    }
    void setDepartment(Department Department)
    {
        this.Department = Department;
    }
}
class Department
{
    private int dept_id;
    private int emp_id;
    private String dept_name;

    Department(int dept_id,int emp_id,String dept_name)
    {
        this.dept_id = dept_id;
        this.emp_id = emp_id;
        this.dept_name = dept_name;
    }
    public int getdept_id()
    {
    return dept_id;
    }
    void setdept_id(int dept_id)
    {
        this.dept_id = dept_id;
    }
    public int getemp_id()
    {
    return emp_id;
    }
    void setemp_id(int emp_id)
    {
        this.emp_id = emp_id;
    }
}
class example
{
    public static void main(String[] args)
    {
       List<Employee1> emp = new ArrayList<Employee1>();
       emp.add(new Employee1(101, "Pratap", 90000, new Department(01,01,"Data Science")));
    }
}