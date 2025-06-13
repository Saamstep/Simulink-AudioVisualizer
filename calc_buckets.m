function [freqs, edges] = calc_buckets(f_min, f_max, fs, fft_len, num_buckets)

% coder.const(fft_len)
% coder.const(num_buckets)

edge_min = ceil(f_min * fft_len / fs);
edge_max = floor(f_max * fft_len / fs);

edges = ceil(logspace(log10(edge_min), log10(edge_max), num_buckets + 1));
freq_edges = (edges - 1) * fs / fft_len;
freqs = (freq_edges(1:end-1) + freq_edges(2:end)) / 2;

end