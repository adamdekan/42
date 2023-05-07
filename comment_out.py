import os


def comment_out_main_functions(file_path):
    with open(file_path, "r") as f:
        lines = f.readlines()

    in_main_func = False
    output_lines = []

    for line in lines:
        if "main(" in line:
            in_main_func = True
            output_lines.append("/*" + line)
        elif in_main_func and "}" in line:
            in_main_func = False
            output_lines.append(line)
            output_lines.append("*/")
        else:
            output_lines.append(line)

    with open(file_path, "w") as f:
        f.write("".join(output_lines))


def walk_and_comment(directory):
    for subdir, dirs, files in os.walk(directory):
        for file in files:
            if file.endswith(".c"):
                file_path = os.path.join(subdir, file)
                comment_out_main_functions(file_path)


if __name__ == "__main__":
    walk_and_comment(".")
