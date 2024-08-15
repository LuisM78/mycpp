import subprocess
import csv

def call_c_program(float1, float2):
    # Call the C program with float arguments and capture the output
    result = subprocess.run(["./multiply", str(float1), str(float2)], capture_output=True, text=True)
    
    # Parse the result
    result_value = result.stdout.strip()
    return result_value

def write_result_to_csv(result_value, filename='result.csv'):
    # Write the result to a CSV file
    with open(filename, mode='w', newline='') as file:
        writer = csv.writer(file)
        writer.writerow(['Multiplication Result'])
        writer.writerow([result_value])

if __name__ == "__main__":
    # Example float values
    float1 = 3.14
    float2 = 10

    # Get the multiplication result from the C program
    result_value = call_c_program(float1, float2)

    # Write the result to a CSV file
    write_result_to_csv(result_value)
    print('the result value is', result_value)
