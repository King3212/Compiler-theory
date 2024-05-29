import os

# Dictionary to convert English numbers to Arabic numerals
english_to_arabic = {
    "one": "1",
    "two": "2",
    "three": "3",
    "four": "4",
    "five": "5",
    "six": "6",
    "seven": "7",
    "eight": "8",
    "nine": "9",
    "ten": "10",
    "eleven": "11",
    "twelve": "12",
    "thirteen": "13",
    "fourteen": "14",
    "fifteen": "15",
    "sixteen": "16",
    "seventeen": "17",
    "eighteen": "18",
    "nineteen": "19",
    "twenty": "20"
}

def english_to_arabic_number(english):
    return english_to_arabic.get(english.lower(), english)  # Default to the original if not found

def split_tests(input_file, output_dir):
    with open(input_file, 'r', encoding='utf-8') as file:
        content = file.read()

    # Split the content by parts
    parts = content.split('{Part ')
    parts = [part for part in parts if part.strip()]  # Remove any empty parts

    # Process each part separately
    for part in parts:
        part_header = part.split('}', 1)[0].strip()  # Extract part header, e.g., "one: regular expression"
        part_content = part.split('}', 1)[1].strip()  # Extract the actual content of the part

        # Split the part header into number and title
        part_number_english, part_title = part_header.split(':', 1)
        part_number_arabic = english_to_arabic_number(part_number_english.strip())  # Convert to Arabic numeral
        part_title = part_title.strip().replace(' ', '_')  # Replace spaces with underscores in title

        # Split the part content by tests
        tests = part_content.split('{test ')
        tests = [test for test in tests if test.strip()]  # Remove any empty tests

        # Process each test separately
        for test in tests:
            test_header = test.split('}', 1)[0].strip()  # Extract test header, e.g., "1: re-assign"
            test_content = test.split('}', 1)[1].strip()  # Extract the actual content of the test

            # Split the test header into number and title
            test_number, test_title = test_header.split(':', 1)
            test_title = test_title.strip().replace(' ', '_')  # Replace spaces with underscores in title

            # Create a directory for the part if it doesn't exist
            part_dir = os.path.join(output_dir, f"Part_{part_number_arabic}_{part_title}")
            os.makedirs(part_dir, exist_ok=True)

            # Create the file name
            file_name = f"test_{test_number}_{test_title}.tny"
            file_path = os.path.join(part_dir, file_name)

            # Write the test content to the file
            with open(file_path, 'w', encoding='utf-8') as test_file:
                test_file.write(test_content)


# Example usage
input_files = ['test.tny','test_error.tny']  # Replace with the path to your input file
output_dir = '../testfiles'  # Replace with the desired output directory

for input_file in input_files:
    split_tests(input_file, output_dir)
