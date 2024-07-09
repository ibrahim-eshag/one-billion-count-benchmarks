import time

target_count = 1_000_000_000  # One billion (using underscores for readability)

def count_up_to_billion():
  start_time = time.perf_counter()  # Get start time in high-resolution

  count = 0
  while count < target_count:
    count += 1

  end_time = time.perf_counter()  # Get end time
  elapsed_time = end_time - start_time

  print(f"Counted up to {target_count:,} in {elapsed_time:.3f} seconds")  # Formatted output

if __name__ == "__main__":
  count_up_to_billion()
