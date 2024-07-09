use std::time::Instant;

fn count_up_to_billion() {
    const TARGET_COUNT: u64 = 1_000_000_000; // One billion (using underscores for readability)
    let start_time = Instant::now();

    let mut count = 0;
    while count < TARGET_COUNT {
        count += 1;
    }

    let elapsed_time = start_time.elapsed().as_secs_f32();
    println!(
        "Counted up to {} in {:.3} seconds",
        TARGET_COUNT, elapsed_time
    );
}

fn main() {
    count_up_to_billion();
}
